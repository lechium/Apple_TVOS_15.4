//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LKCGImageCodingProxy
{
    struct CGImage *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001dbe2
- (void)dealloc;	// IMP=0x000000000001d96f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d729
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d537
- (id)decodedObject;	// IMP=0x000000000001d526
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001d340

@end
