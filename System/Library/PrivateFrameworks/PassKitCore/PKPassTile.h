//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPassTileMetadata, PKPassTileState;

@interface PKPassTile : NSObject <NSSecureCoding>
{
    _Bool _inProgress;	// 8 = 0x8
    PKPassTileMetadata *_metadata;	// 16 = 0x10
    NSString *_stateIdentifier;	// 24 = 0x18
    PKPassTileState *_state;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f495c
+ (id)createTileRowsForTiles:(id)arg1;	// IMP=0x00000000001f43df
- (void).cxx_destruct;	// IMP=0x00000000001f4c4b
@property(readonly, nonatomic, getter=isInProgress) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) PKPassTileState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *stateIdentifier; // @synthesize stateIdentifier=_stateIdentifier;
@property(readonly, nonatomic) PKPassTileMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)supportsPaymentPassAction:(id)arg1;	// IMP=0x00000000001f4b14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f4a7a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f4964
- (id)_initWithMetadata:(id)arg1 stateIdentifier:(id)arg2 state:(id)arg3 inProgress:(_Bool)arg4;	// IMP=0x00000000001f485d
- (id)_init;	// IMP=0x00000000001f482e
- (id)init;	// IMP=0x00000000001f4820

@end

