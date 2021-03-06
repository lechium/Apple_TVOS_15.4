//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ACComponentVector : NSObject <NSSecureCoding>
{
    struct AudioComponentVector mVector;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b1f40
- (id).cxx_construct;	// IMP=0x00000000000b24a9
- (void).cxx_destruct;	// IMP=0x00000000000b249b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b2390
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b1f8d
- (id)initWithVector:(const void *)arg1;	// IMP=0x00000000000b1f48

@end

