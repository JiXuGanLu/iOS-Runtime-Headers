/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSCache, NSObject<OS_dispatch_queue>, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray {
    unsigned long long _batchSize;
    NSCache *_cache;
    unsigned long long _count;
    NSArray *_firstBatch;
    unsigned long long _firstBatchIndex;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    NSArray *_oids;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
}

@property(readonly) NSArray * oids;
@property(readonly) PHPhotoLibrary * photoLibrary;

+ (bool)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)__batchHelper:(unsigned long long)arg1;
- (id)_phObjectAtIndex:(unsigned long long)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (void)min:(id*)arg1 andMax:(id*)arg2 forKeypath:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)oids;
- (id)photoLibrary;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end