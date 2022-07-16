//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/BMStoreData-Protocol.h>
#import <FeatureStore/FSFFeature-Protocol.h>

@class NSString;

@interface FSFNLUFeature : NSObject <FSFFeature, BMStoreData>
{
    unsigned int _dataVersion;	// 8 = 0x8
    NSString *_content;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000043d6
- (void).cxx_destruct;	// IMP=0x00000000000044fe
- (id)interactionId;	// IMP=0x0000000000004468
- (id)json;	// IMP=0x000000000000444d
- (id)serialize;	// IMP=0x0000000000004432
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)content;	// IMP=0x0000000000004366
- (id)initWithContent:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000004291
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000041ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
