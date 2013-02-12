/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    unsigned long long _itemID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property(retain) MPHomeSharingML3DataProvider * dataProvider;
@property(readonly) unsigned long long itemID;

- (BOOL)_errorIsFairPlayError:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (id)initWithItemID:(unsigned long long)arg1 rentalID:(unsigned long long)arg2 accountID:(unsigned long long)arg3;
- (unsigned long long)itemID;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resolveError:(id)arg1;
- (void)setDataProvider:(id)arg1;

@end