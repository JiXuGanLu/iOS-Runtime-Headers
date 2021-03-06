/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    id  _deletes;
    id  _inserts;
    id  _masterUpdates;
    id  _otherUpdates;
    NSSQLManyToMany * _relationship;
}

@property (readonly) NSSQLManyToMany *relationship;

- (id)_organizeValues:(id)arg1;
- (void)dealloc;
- (void)enumerateDeletesUsingBlock:(id /* block */)arg1;
- (void)enumerateInsertsUsingBlock:(id /* block */)arg1;
- (void)enumerateMasterReordersPart2UsingBlock:(id /* block */)arg1;
- (void)enumerateMasterReordersUsingBlock:(id /* block */)arg1;
- (void)enumerateReordersUsingBlock:(id /* block */)arg1;
- (BOOL)hasDeletes;
- (BOOL)hasInserts;
- (BOOL)hasMasterReorders;
- (BOOL)hasReorders;
- (id)initForRelationship:(id)arg1;
- (id)relationship;
- (void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4;
- (void)trackReorders:(id)arg1 forObjectWithID:(id)arg2;

@end
