#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

// エラーコード
typedef enum {
    CIVErrorCodeFailureHttp = 2000,
    CIVErrorCodeFailureHttpNoRetry,
    CIVErrorCodeFailureRtb,
    CIVErrorCodeInvalidDisplayType,
    CIVErrorCodeFailureLocation,
    CIVErrorCodeErrorSystem,
} CIVErrorCode;

// エラー情報のドメイン
extern NSString * const CIVErrorDomain;
// ラップされた元のエラー情報のキー
extern NSString * const CIVSuperError;

@protocol CompassInterstitialViewDelegate <NSObject>

@optional

/**
 * 正常に読み込みが完了した時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 */
- (void)isLoadCompassSuccess:(NSInteger)tag;

/**
 * インタースティシャル広告を表示した時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 */
- (void)isShowCompass:(NSInteger)tag;

/**
 * インタースティシャル広告を閉じた時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 */
- (void)isDismissCompass:(NSInteger)tag;

/**
 * 失敗時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 * @param error エラー情報
 */
- (void)isLoadCompassFailure:(NSInteger)tag withNSError:(NSError *)error;

@end


@interface CompassInterstitialView : NSObject

@property (nonatomic, assign) id<CompassInterstitialViewDelegate> delegate;

+ (CompassInterstitialView *)sharedManager;

/**
 * タグの設定
 */
- (void)setTag:(NSInteger)tag;

/**
 * 広告表示処理
 */
- (void)showAd;

/**
 * 広告表示処理
 */
- (void)showAd:(NSString *)spotId;

/**
 * 位置情報サービス利用リクエスト
 * @param isAlways 常に位置情報を取得するか
 */
- (void)requestLocation:(BOOL)isAlways;

@end
