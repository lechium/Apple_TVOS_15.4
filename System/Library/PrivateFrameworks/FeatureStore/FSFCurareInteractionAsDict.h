//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/FSFCurareInteraction-Protocol.h>

@class NSDictionary, NSString;

@interface FSFCurareInteractionAsDict : NSObject <FSFCurareInteraction>
{
    NSDictionary *_content;	// 8 = 0x8
    NSString *_interactionId;	// 16 = 0x10
    unsigned int _dataVersion;	// 24 = 0x18
}

+ (id)deserialize:(id)arg1 dataVersion:(unsigned int)arg2 interactionId:(id)arg3;	// IMP=0x0000000000004158
- (void).cxx_destruct;	// IMP=0x00000000000041d7
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2 interactionId:(id)arg3;	// IMP=0x0000000000004054
- (id)serialize;	// IMP=0x0000000000003fd5
- (id)json;	// IMP=0x0000000000003f79
- (id)initWithContent:(id)arg1 interactionId:(id)arg2 dataVersion:(unsigned int)arg3;	// IMP=0x0000000000003e7e
@property(readonly, nonatomic) NSString *interactionId;
@property(readonly, nonatomic) unsigned int dataVersion;

@end

