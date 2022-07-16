//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFFileRepresentation;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    WFFileRepresentation *_file;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_sourceAppIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bff97
- (void).cxx_destruct;	// IMP=0x00000000000bff64
@property(readonly, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bff3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bfe58
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bfd1f
- (id)initWithFile:(id)arg1 name:(id)arg2 sourceAppIdentifier:(id)arg3;	// IMP=0x00000000000bfb3b
- (id)initWithFile:(id)arg1 name:(id)arg2;	// IMP=0x00000000000bfb26

@end

