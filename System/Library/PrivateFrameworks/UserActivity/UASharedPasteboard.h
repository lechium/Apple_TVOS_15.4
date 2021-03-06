//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject
{
    UASharedPasteboardManager *_manager;	// 8 = 0x8
}

+ (void)stopPreventingPasteboardSharing;	// IMP=0x00000000000496a2
+ (void)startPreventingPasteboardSharing;	// IMP=0x000000000004965e
+ (id)remotePasteboard;	// IMP=0x00000000000491e2
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)arg1;	// IMP=0x000000000004914c
+ (void)clearLocalPasteboardInformation;	// IMP=0x00000000000490a6
+ (void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2;	// IMP=0x0000000000048daf
+ (void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;	// IMP=0x0000000000048c84
+ (void)initialize;	// IMP=0x0000000000048c7e
@property UASharedPasteboardManager *manager; // @synthesize manager=_manager;
- (id)currentRemoteDeviceName;	// IMP=0x000000000004956f
- (void)prefetchRemotePasteboardTypes:(id)arg1;	// IMP=0x00000000000494d4
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000493d4
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000492d4
- (_Bool)returnPasteboardDataBeforeArchives;	// IMP=0x0000000000049289

@end

