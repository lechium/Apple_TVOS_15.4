//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BagKit/NSSecureCoding-Protocol.h>

@class NSError;

@interface BAGResourceUpdateContext : NSObject <NSSecureCoding>
{
    unsigned long long _loadState;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008480
- (void).cxx_destruct;	// IMP=0x00000000000086bb
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
- (id)description;	// IMP=0x00000000000085ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008531
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008488
- (id)initWithLoadState:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000000838a

@end

