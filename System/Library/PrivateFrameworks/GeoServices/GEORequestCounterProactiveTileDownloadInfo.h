//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_policies;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000312282
- (void).cxx_destruct;	// IMP=0x000000000031251e
@property(readonly, copy, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000031249c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000312352
- (id)initWithIdentifier:(id)arg1 policies:(id)arg2;	// IMP=0x000000000031228a

@end

