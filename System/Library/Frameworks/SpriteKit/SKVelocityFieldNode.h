//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, SKTexture;

@interface SKVelocityFieldNode
{
    SKTexture *_velocityTexture;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ce3b
- (void).cxx_destruct;	// IMP=0x000000000000d180
@property(retain, nonatomic) SKTexture *velocityTexture; // @synthesize velocityTexture=_velocityTexture;
@property(nonatomic) MISSING_TYPE *velocity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d03c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf2d
- (id)init;	// IMP=0x000000000000cec3
- (void)_initialize;	// IMP=0x000000000000ce50
- (id)_descriptionClassName;	// IMP=0x000000000000ce43

@end

