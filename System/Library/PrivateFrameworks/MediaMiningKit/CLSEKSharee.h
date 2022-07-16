//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding>
{
    _Bool _isCurrentUserForSharing;	// 8 = 0x8
    _Bool _isCurrentUserForScheduling;	// 9 = 0x9
    NSString *_emailAddress;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006f18d
@property(readonly) _Bool isCurrentUserForScheduling; // @synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling;
@property(readonly) _Bool isCurrentUserForSharing; // @synthesize isCurrentUserForSharing=_isCurrentUserForSharing;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006f0a5
- (unsigned long long)hash;	// IMP=0x000000000006f059
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006efbb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006eeb0
- (id)initWithEKSharee:(id)arg1;	// IMP=0x000000000006ee05

@end

