//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVProfileReader-Protocol.h>

@class KVProfileInfo, NSData, NSString;

@interface KVEmbeddedProfileReader : NSObject <KVProfileReader>
{
    NSData *_data;	// 8 = 0x8
    const struct Profile *_profile;	// 16 = 0x10
    KVProfileInfo *_profileInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e1c5
@property(readonly, copy) NSString *description;
- (id)profileInfo;	// IMP=0x000000000000e148
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e033
- (id)initWithData:(id)arg1 profile:(const struct Profile *)arg2 profileInfo:(id)arg3;	// IMP=0x000000000000df6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

