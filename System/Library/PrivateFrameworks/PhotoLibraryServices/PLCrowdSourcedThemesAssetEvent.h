//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/BMStoreData-Protocol.h>

@class NSString;

@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData>
{
    NSString *_uuid;	// 8 = 0x8
    unsigned int dataVersion;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000005a3f20
- (void).cxx_destruct;	// IMP=0x00000000005a3f10
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion;
- (id)serialize;	// IMP=0x00000000005a3ea8
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000005a3e35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
