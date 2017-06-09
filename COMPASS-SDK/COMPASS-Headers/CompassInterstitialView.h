#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "AvailabilityMacros.h"

// エラー情報のドメイン
extern NSString * const CIVErrorDomain;
// ラップされた元のエラー情報のキー
extern NSString * const CIVSuperError;

DEPRECATED_MSG_ATTRIBUTE("This is deprecated since version 2.1.0. Please use CompassInterstitialDelegate methods.")
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

DEPRECATED_MSG_ATTRIBUTE("This is deprecated since version 2.1.0. Please use CompassInterstitial.")
@interface CompassInterstitialView : NSObject

@property (nonatomic, weak) id<CompassInterstitialViewDelegate> delegate;

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
 * @param shouldRequestLocationRepeatedly 常に位置情報を取得するか
 */
- (void)requestLocation:(BOOL)shouldRequestLocationRepeatedly;

@end
