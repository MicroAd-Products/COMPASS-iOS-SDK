//
//  CompassInterstitial.h
//  CompassSDK
//

/**
 * v.2.1.0 から CompassInterstitialView & CompassWindow は非推奨になりました.
 * CompassInterstitial を実装してください.
 */

@interface CompassInterstitial : UIViewController

// COMPASS  インタースティシャルのデリゲート
@property (nonatomic, weak) id    delegate;

// 広告読み込みが終わったか
@property (nonatomic, assign) BOOL  isInterstitialLoaded;

/**
 * 初期化
 *
 * @param spotId    広告 ID (任意)
 */
- (id) initWithSpotId:(NSString *) spotId;

/**
 * 広告読み込み
 */
- (void)requestAd;

/**
 * COMPASS インタースティシャルビューを表示する
 *
 * @param parentViewController インタースティシャルビューを表示する ViewController
 */
- (void)presentCompassInterstitialFromParentViewController:(UIViewController *) parentViewController;

/**
 * 位置情報サービス利用して広告読み込み
 * @param shouldRequestLocationRepeatedly 常に位置情報を取得するか
 */
- (void)requestAdUseLocation:(BOOL)shouldRequestLocationRepeatedly;

@end

