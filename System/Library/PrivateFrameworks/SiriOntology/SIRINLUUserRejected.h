//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUUserDialogAct-Protocol.h>

@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserRejected : NSObject <SIRINLUUserDialogAct>
{
    NSUUID *_offerId;	// 8 = 0x8
    USOSerializedGraph *_reference;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d1f49
- (void).cxx_destruct;	// IMP=0x00000000000d2208
@property(retain, nonatomic) USOSerializedGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSUUID *offerId; // @synthesize offerId=_offerId;
- (id)description;	// IMP=0x00000000000d20d9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d202b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d1f51
- (id)initWithOfferId:(id)arg1 reference:(id)arg2;	// IMP=0x00000000000d1eb0
- (id)init;	// IMP=0x00000000000d1e81

@end

