//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMDaemonController, NSMutableDictionary;

@interface IMDaemonQueryController : NSObject
{
    IMDaemonController *_daemonController;	// 8 = 0x8
    NSMutableDictionary *_queries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009306d
@property(readonly, nonatomic) NSMutableDictionary *queries; // @synthesize queries=_queries;
@property(readonly, nonatomic) __weak IMDaemonController *daemonController; // @synthesize daemonController=_daemonController;
- (void)_validateOutstandingQueries;	// IMP=0x0000000000092be2
- (void)_daemonDisconnected:(id)arg1;	// IMP=0x0000000000092aae
- (void)failQuery:(id)arg1 error:(id)arg2;	// IMP=0x0000000000092a94
- (void)completeQuery:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000092a77
- (void)completeQuery:(id)arg1;	// IMP=0x0000000000092a63
- (void)_completeQuery:(id)arg1 success:(_Bool)arg2 error:(id)arg3 userInfo:(id)arg4;	// IMP=0x0000000000092869
- (void)performQueryWithKey:(id)arg1 expectsSynchronousResult:(_Bool)arg2 block:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000925c7
- (void)performQueryWithKey:(id)arg1 expectsSynchronousResult:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000925b2
- (id)initWithDaemonController:(id)arg1;	// IMP=0x00000000000924d7

@end

