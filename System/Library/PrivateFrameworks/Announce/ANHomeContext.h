//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ANHomeContext : NSObject <NSSecureCoding>
{
    _Bool _isEmpty;	// 8 = 0x8
    NSString *_homeName;	// 16 = 0x10
    NSArray *_zoneNames;	// 24 = 0x18
    NSArray *_roomNames;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b5a5
- (void).cxx_destruct;	// IMP=0x000000000001b863
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) NSArray *roomNames; // @synthesize roomNames=_roomNames;
@property(retain, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b690
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b5ad
- (id)description;	// IMP=0x000000000001b49d
- (id)init;	// IMP=0x000000000001b350

@end

