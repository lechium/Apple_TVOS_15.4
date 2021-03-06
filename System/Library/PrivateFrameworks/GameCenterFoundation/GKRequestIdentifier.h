//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>
{
    unsigned long long _savedHash;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSArray *_arguments;	// 24 = 0x18
}

+ (id)requestIdentifierForInvocation:(id)arg1;	// IMP=0x00000000000b53dd
- (void).cxx_destruct;	// IMP=0x00000000000b5633
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) unsigned long long savedHash; // @synthesize savedHash=_savedHash;
- (id)description;	// IMP=0x00000000000b5545
- (unsigned long long)hash;	// IMP=0x00000000000b553b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b54e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b542a
- (id)initWithInvocation:(id)arg1;	// IMP=0x00000000000b5310
- (id)_argumentsForInvocation:(id)arg1;	// IMP=0x00000000000b4ef2

@end

