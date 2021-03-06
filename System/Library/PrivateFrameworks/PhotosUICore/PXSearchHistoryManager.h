//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXSearchHistoryManager : NSObject
{
    NSArray *_recentSearches;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0000000000564f38
- (void).cxx_destruct;	// IMP=0x0000000000565c6b
- (id)_readRecentSearchesFromURL:(id)arg1;	// IMP=0x0000000000565850
- (_Bool)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000056560d
- (id)_recentSearchesFileURL;	// IMP=0x00000000005654da
@property(retain, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
- (void)saveRecentSearch:(id)arg1;	// IMP=0x0000000000565003
- (void)clearRecentSearches;	// IMP=0x0000000000564fef

@end

