/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {
    NSArray *_desiredKeys;
    id /* block */ _fetchRecordVersionsCompletionBlock;
    id /* block */ _fetchRecordVersionsProgressBlock;
    BOOL _isDeleted;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDs;
    BOOL _shouldFetchAssetContent;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchRecordVersionsCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchRecordVersionsProgressBlock;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic, copy) NSString *minimumVersionETag;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id)desiredKeys;
- (id /* block */)fetchRecordVersionsCompletionBlock;
- (id /* block */)fetchRecordVersionsProgressBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (BOOL)isDeleted;
- (id)minimumVersionETag;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordVersionsCompletionBlock:(id /* block */)arg1;
- (void)setFetchRecordVersionsProgressBlock:(id /* block */)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (BOOL)shouldFetchAssetContent;

@end
