//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TVCKDataClient, TVCKDataQuery;
@protocol TVCKDataClientResultsControllerDataSource, TVCKDataClientResultsControllerDelegate;

@interface TVCKDataClientResultsController : NSObject
{
    _Bool _initialResultsNeedUpdating;	// 8 = 0x8
    _Bool _pausedUpdateHandling;	// 9 = 0x9
    CDUnknownBlockType _dataQueryBlock;	// 16 = 0x10
    id <TVCKDataClientResultsControllerDataSource> _dataSource;	// 24 = 0x18
    id <TVCKDataClientResultsControllerDelegate> _delegate;	// 32 = 0x20
    TVCKDataClient *_dataClient;	// 40 = 0x28
    NSArray *_results;	// 48 = 0x30
    long long _status;	// 56 = 0x38
    unsigned long long _queryAttempt;	// 64 = 0x40
    TVCKDataQuery *_query;	// 72 = 0x48
    NSDictionary *_pausedDataClientDataUpdateInfo;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001e224
@property(copy, nonatomic) NSDictionary *pausedDataClientDataUpdateInfo; // @synthesize pausedDataClientDataUpdateInfo=_pausedDataClientDataUpdateInfo;
@property(nonatomic) _Bool pausedUpdateHandling; // @synthesize pausedUpdateHandling=_pausedUpdateHandling;
@property(nonatomic) _Bool initialResultsNeedUpdating; // @synthesize initialResultsNeedUpdating=_initialResultsNeedUpdating;
@property(retain, nonatomic) TVCKDataQuery *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long queryAttempt; // @synthesize queryAttempt=_queryAttempt;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) TVCKDataClient *dataClient; // @synthesize dataClient=_dataClient;
@property(nonatomic) __weak id <TVCKDataClientResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVCKDataClientResultsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType dataQueryBlock; // @synthesize dataQueryBlock=_dataQueryBlock;
- (void)resumeUpdateHandling;	// IMP=0x000000000001e06f
- (void)pauseUpdateHandling;	// IMP=0x000000000001e058
- (void)stop;	// IMP=0x000000000001dfab
- (void)start;	// IMP=0x000000000001df22
- (void)_notifyDidFailQuery:(id)arg1;	// IMP=0x000000000001de78
- (void)_notifyDidChangeResultsForQuery:(id)arg1;	// IMP=0x000000000001ddce
- (void)_notifyWillChangeResultsForQuery:(id)arg1;	// IMP=0x000000000001dd24
- (void)_attemptQuery;	// IMP=0x000000000001d8ee
- (void)_handleDataClientDataUpdated:(id)arg1;	// IMP=0x000000000001d7fe
- (void)_dataClientDataUpdated:(id)arg1;	// IMP=0x000000000001d792
- (void)dealloc;	// IMP=0x000000000001d754
- (id)initWithDataClient:(id)arg1;	// IMP=0x000000000001d6cc

@end

