//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface THAButton : NSObject
{
    unsigned char _identifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned char identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x00000000006b77ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b7701
- (id)description;	// IMP=0x00000000006b76a3
- (id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2;	// IMP=0x00000000006b765b

@end

