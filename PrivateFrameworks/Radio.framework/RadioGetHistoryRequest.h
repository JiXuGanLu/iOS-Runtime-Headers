/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, RadioPlayEventCollection, SSURLConnectionRequest;

@interface RadioGetHistoryRequest : RadioRequest {
    unsigned long long _maxNumberOfTracks;
    RadioPlayEventCollection *_playEventCollection;
    SSURLConnectionRequest *_request;
    NSString *_stationHash;
    long long _stationID;
    bool_aggregateSessions;
    bool_fetchForAccount;
    bool_includesAds;
    bool_shouldProcessCategories;
}

@property bool aggregateSessions;
@property bool fetchForAccount;
@property bool includesAds;
@property unsigned long long maxNumberOfTracks;
@property(copy) RadioPlayEventCollection * playEventCollection;
@property bool shouldProcessCategories;
@property(copy) NSString * stationHash;
@property long long stationID;

- (void).cxx_destruct;
- (id)_newHistoryCategoryWithDictionary:(id)arg1;
- (id)_newHistoryItemWithDictionary:(id)arg1;
- (bool)aggregateSessions;
- (void)cancel;
- (bool)fetchForAccount;
- (bool)includesAds;
- (id)init;
- (unsigned long long)maxNumberOfTracks;
- (id)playEventCollection;
- (void)setAggregateSessions:(bool)arg1;
- (void)setFetchForAccount:(bool)arg1;
- (void)setIncludesAds:(bool)arg1;
- (void)setMaxNumberOfTracks:(unsigned long long)arg1;
- (void)setPlayEventCollection:(id)arg1;
- (void)setShouldProcessCategories:(bool)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (bool)shouldProcessCategories;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithHistoryCompletionHandler:(id)arg1;
- (id)stationHash;
- (long long)stationID;

@end