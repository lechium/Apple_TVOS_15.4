//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/BMStoreData-Protocol.h>
#import <FeatureStore/FSFFeature-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface _CurareInternalBiomeFeature : NSObject <FSFFeature, BMStoreData>
{
    NSMutableDictionary *_content;	// 8 = 0x8
    unsigned int dataVersion;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000146c
- (void).cxx_destruct;	// IMP=0x00000000000015dd
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion;
- (id)json;	// IMP=0x0000000000001555
- (id)interactionId;	// IMP=0x0000000000001538
- (id)serialize;	// IMP=0x00000000000014b9
- (id)initWithData:(id)arg1;	// IMP=0x00000000000013a4
- (id)initWithCurareInteraction:(id)arg1;	// IMP=0x000000000000127e
@property(readonly, nonatomic) NSDictionary *content;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

