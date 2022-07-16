//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/BMStoreData-Protocol.h>
#import <FeatureStore/FSFFeature-Protocol.h>

@class NSString, SIRINLUEXTERNALCDMNluRequest;

@interface FSFNluRequestFeature : NSObject <FSFFeature, BMStoreData>
{
    unsigned int _dataVersion;	// 8 = 0x8
    SIRINLUEXTERNALCDMNluRequest *_content;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000005113
- (void).cxx_destruct;	// IMP=0x0000000000005248
- (id)interactionId;	// IMP=0x00000000000051f4
- (id)json;	// IMP=0x0000000000005185
- (id)serialize;	// IMP=0x000000000000516f
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)content;	// IMP=0x00000000000050a3
- (id)initWithContentJson:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000004f81
- (id)initWithContent:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000004eac
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000004e1f
- (id)getSerializedData;	// IMP=0x0000000000004e17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
