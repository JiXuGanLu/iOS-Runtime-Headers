/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicResponse : NSObject <HFPrettyDescription> {
    NSError * _error;
    HMCharacteristicRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMCharacteristicRequest *request;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)error;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescription;

@end
