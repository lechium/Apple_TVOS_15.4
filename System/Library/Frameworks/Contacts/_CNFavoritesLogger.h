//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNFavoritesLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSObject<OS_os_log> *_summaryLog;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e730
@property(readonly, nonatomic) NSObject<OS_os_log> *summaryLog; // @synthesize summaryLog=_summaryLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)reportFavoritesAccessedBeforeFirstUnlock;	// IMP=0x000000000001e678
- (void)_simulateCrashReportWithMessage:(id)arg1;	// IMP=0x000000000001e5f8
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x000000000001e51d
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;	// IMP=0x000000000001e4be
- (void)failedToWriteRemoteFavorites:(id)arg1;	// IMP=0x000000000001e44e
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;	// IMP=0x000000000001e2f6
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;	// IMP=0x000000000001e286
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x000000000001e1ab
- (void)failedToReadRemoteFavorites:(id)arg1;	// IMP=0x000000000001e13b
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x000000000001e07a
- (void)finishedWritingRemoteFavorites;	// IMP=0x000000000001e016
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x000000000001df55
- (void)finishedReadingRemoteFavorites;	// IMP=0x000000000001def1
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dd82
- (void)writingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dc13
- (void)readingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x000000000001da6c
- (id)init;	// IMP=0x000000000001d9fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

