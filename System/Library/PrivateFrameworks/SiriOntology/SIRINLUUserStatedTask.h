//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUUserDialogAct-Protocol.h>

@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct>
{
    USOSerializedGraph *_task;	// 8 = 0x8
    USOSerializedGraph *_goal;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2b2b
- (void).cxx_destruct;	// IMP=0x00000000000d2d43
@property(retain, nonatomic) USOSerializedGraph *goal; // @synthesize goal=_goal;
@property(retain, nonatomic) USOSerializedGraph *task; // @synthesize task=_task;
- (id)description;	// IMP=0x00000000000d2c4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d2bd4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d2b33
- (id)initWithGoal:(id)arg1;	// IMP=0x00000000000d2ab4
- (id)initWithTask:(id)arg1;	// IMP=0x00000000000d2a3d

@end
