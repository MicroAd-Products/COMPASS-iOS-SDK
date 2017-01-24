#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

// エラー情報のドメイン
extern NSString * const CVErrorDomain;
// ラップされた元のエラー情報のキー
extern NSString * const CVSuperError;

@protocol CompassViewDelegate <NSObject>

@required
@optional

/**
 * 正常に読み込みが完了した時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 */
- (void)isLoadCompassSuccess:(NSInteger)tag;

/**
 * 広告を初回表示した時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 */
- (void)isShowCompass:(NSInteger)tag;

/**
 * 失敗時に呼ばれるデリゲートメソッド
 * @param tag ビューのタグ
 * @param error エラー情報
 */
- (void)isLoadCompassFailure:(NSInteger)tag withNSError:(NSError *)error;

@end


@interface CompassView : UIView

@property (nonatomic, weak) id<CompassViewDelegate> delegate;
@property (nonatomic, assign) BOOL isMediated;

/**
 * 初期化（Viewを設定）
 */
- (id)initWithUIView:(UIView*)view;

/**
 * 広告読み込み
 */
- (void)load;

/**
 * 広告読み込み
 */
- (void)load:(NSString * )spotId;

/**
 * 解放処理
 */
- (void)deallocAdvertisement;

/**
 * 広告再読み込み
 */
- (void)reload;

/**
 * 広告再読み込み
 */
- (void)reload:(NSString *)spotId;

/**
 * 位置情報サービス利用リクエスト
 * @param shouldRequestLocationRepeatedly 常に位置情報を取得するか
 */
- (void)requestLocation:(BOOL)shouldRequestLocationRepeatedly;

@end
