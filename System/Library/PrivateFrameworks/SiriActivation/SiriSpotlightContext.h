//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SiriSpotlightContext
{
    NSString *_utteranceText;	// 8 = 0x8
    long long _source;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002f2b3
- (void).cxx_destruct;	// IMP=0x000000000002f49c
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f395
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f2bb
- (id)description;	// IMP=0x000000000002f1da

@end

