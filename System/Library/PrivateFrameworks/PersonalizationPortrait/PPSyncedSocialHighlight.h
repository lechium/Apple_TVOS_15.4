//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSString, PPSocialHighlight;

@interface PPSyncedSocialHighlight : NSObject <NSSecureCoding>
{
    PPSocialHighlight *_highlight;	// 8 = 0x8
    NSDate *_rankingDate;	// 16 = 0x10
    NSString *_originatingDeviceId;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004cdaf
- (void).cxx_destruct;	// IMP=0x000000000004cd7c
@property(readonly, nonatomic) NSString *originatingDeviceId; // @synthesize originatingDeviceId=_originatingDeviceId;
@property(readonly, nonatomic) NSDate *rankingDate; // @synthesize rankingDate=_rankingDate;
@property(readonly, nonatomic) PPSocialHighlight *highlight; // @synthesize highlight=_highlight;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004cb55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004cad2
- (id)description;	// IMP=0x000000000004ca12
- (id)initWithHighlight:(id)arg1 rankingDate:(id)arg2 originatingDeviceId:(id)arg3;	// IMP=0x000000000004c95b

@end

