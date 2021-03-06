//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface WFWorkflowQuarantine : NSObject <NSCopying>
{
    NSString *_sourceAppIdentifier;	// 8 = 0x8
    NSDate *_importDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005f61
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005f42
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005dfa
- (id)serializedRepresentation;	// IMP=0x0000000000005d18
- (id)serializedData;	// IMP=0x0000000000005bf2
- (id)initWithSerializedData:(id)arg1;	// IMP=0x00000000000059f2
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;	// IMP=0x000000000000584f

@end

