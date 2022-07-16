//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ANPlaybackCommand : NSObject <NSSecureCoding>
{
    unsigned long long _options;	// 8 = 0x8
    NSArray *_announcementIdentifiers;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    unsigned long long _operation;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013073
+ (id)previousCommand;	// IMP=0x000000000001303c
+ (id)nextCommand;	// IMP=0x0000000000013005
+ (id)stopCommand;	// IMP=0x0000000000012fce
+ (id)playCommandWithOptions:(unsigned long long)arg1 announcementIdentifiers:(id)arg2;	// IMP=0x0000000000012f70
- (void).cxx_destruct;	// IMP=0x000000000001330f
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSArray *announcementIdentifiers; // @synthesize announcementIdentifiers=_announcementIdentifiers;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013156
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001307b
- (id)description;	// IMP=0x0000000000012e4d
- (id)initWithPlaybackOperation:(unsigned long long)arg1 options:(unsigned long long)arg2 forRecipient:(id)arg3;	// IMP=0x0000000000012e05
- (id)initWithPlaybackOperation:(unsigned long long)arg1 options:(unsigned long long)arg2 announcementIdentifiers:(id)arg3;	// IMP=0x0000000000012d84

@end
