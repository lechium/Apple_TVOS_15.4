//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <NSSecureCoding>
{
    long long _version;	// 8 = 0x8
    NSArray *_history;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000356da
- (void).cxx_destruct;	// IMP=0x00000000000358c8
@property(retain, nonatomic) NSArray *history; // @synthesize history=_history;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035831
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000356e2
- (id)init;	// IMP=0x000000000003569e

@end
