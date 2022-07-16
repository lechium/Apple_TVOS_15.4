//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDictationOfflineStatusObserver : NSObject
{
    NSDictionary *_offlineDictationStatus;	// 8 = 0x8
}

+ (id)_offlineDictationStatusStringToDictionary:(id)arg1;	// IMP=0x0040000000094875
+ (id)sharedDictationOfflineStatusObserver;	// IMP=0x0010000000094805
- (void).cxx_destruct;	// IMP=0x00200000000951fe
@property(retain, nonatomic) NSDictionary *offlineDictationStatus; // @synthesize offlineDictationStatus=_offlineDictationStatus;
- (void)fetchOfflineDictationStatusIgnoringCache:(_Bool)arg1 asynchronously:(_Bool)arg2;	// IMP=0x0010000000094d80
- (void)_updateOfflineDictationStatus:(id)arg1 error:(id)arg2;	// IMP=0x0010000000094b5e

@end
