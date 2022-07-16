//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUSystemDialogAct-Protocol.h>

@class NSString, USOSerializedGraph;

@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct>
{
    NSString *renderedText;	// 8 = 0x8
    USOSerializedGraph *_reference;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d0ba0
- (void).cxx_destruct;	// IMP=0x00000000000d0e5f
@property(retain, nonatomic) USOSerializedGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSString *renderedText; // @synthesize renderedText;
- (id)description;	// IMP=0x00000000000d0d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d0c82
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d0ba8
- (id)initWithReference:(id)arg1;	// IMP=0x00000000000d0b35

@end

