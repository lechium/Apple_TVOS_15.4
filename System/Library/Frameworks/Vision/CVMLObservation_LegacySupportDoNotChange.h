//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CVMLObservation_LegacySupportDoNotChange : NSObject <NSSecureCoding>
{
    float _confidence;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018ee83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018de4f
- (id)initWithData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000018dc1c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018da83

@end
