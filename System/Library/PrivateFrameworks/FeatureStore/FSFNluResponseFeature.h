//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/BMStoreData-Protocol.h>
#import <FeatureStore/FSFFeature-Protocol.h>

@class NSString, SIRINLUEXTERNALCDMNluResponse;

@interface FSFNluResponseFeature : NSObject <FSFFeature, BMStoreData>
{
    unsigned int _dataVersion;	// 8 = 0x8
    SIRINLUEXTERNALCDMNluResponse *_content;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000002ea0
- (void).cxx_destruct;	// IMP=0x0000000000002fd5
- (id)interactionId;	// IMP=0x0000000000002f81
- (id)json;	// IMP=0x0000000000002f12
- (id)serialize;	// IMP=0x0000000000002efc
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)content;	// IMP=0x0000000000002e30
- (id)initWithContentJson:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000002d0e
- (id)initWithContent:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000002c39
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000002bac
- (id)getSerializedData;	// IMP=0x0000000000002ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
