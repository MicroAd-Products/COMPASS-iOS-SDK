//
//  CompassInterstitialDelegate.h
//  CompassSDK
//

#import <Foundation/Foundation.h>

@class CompassInterstitial;
@protocol CompassInterstitialDelegate <NSObject>

@required
/**
 * インタースティシャル広告を閉じた時に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 */
- (void)didDismissCompassInterstitial:(CompassInterstitial *)compassInterstitial;

@optional

/**
 * 正常に読み込みが完了した時に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 */
- (void)compassInterstitialDidLoad:(CompassInterstitial *)compassInterstitial;

/**
 * 失敗時に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 * @param error エラー情報
 */
- (void)compassInterstitialDidFailToLoad:(CompassInterstitial *)compassInterstitial withNSError:(NSError *)error;

/**
 * 表示する前に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 */
- (void)willPresentCompassInterstitial:(CompassInterstitial *)compassInterstitial;

/**
 * 表示した時に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 */
- (void)didPresentCompassInterstitial:(CompassInterstitial *)compassInterstitial;

/**
 * インタースティシャル広告を閉じる時に呼ばれるデリゲートメソッド
 * @param compassInterstitial 読み込むインタースティシャル
 */
- (void)willDismissCompassInterstitial:(CompassInterstitial *)compassInterstitial;

/**
 * インタースティシャルーをクリックした時に呼ばれるデリゲートメソッド
 * @param compassInterstitial クリックされたインタースティシャル
 */
- (void)compassInterstitialWasClicked:(CompassInterstitial *)compassInterstitial;

@end
