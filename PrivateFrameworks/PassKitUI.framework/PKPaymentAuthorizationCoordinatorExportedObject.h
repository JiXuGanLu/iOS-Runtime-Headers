/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {
    PKPaymentAuthorizationCoordinator * _controller;
    <PKPaymentAuthorizationCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <PKPaymentAuthorizationCoordinatorPrivateDelegate> * _privateDelegate;
    <PKPaymentAuthorizationServiceProtocol> * _serviceProxy;
}

@property (nonatomic) PKPaymentAuthorizationCoordinator *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <PKPaymentAuthorizationCoordinatorPrivateDelegate> *privateDelegate;
@property (nonatomic, retain) <PKPaymentAuthorizationServiceProtocol> *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithController:(id)arg1;
- (id)privateDelegate;
- (id)serviceProxy;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
