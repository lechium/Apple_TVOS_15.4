//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>
{
    _Bool _filterInbound;	// 8 = 0x8
    _Bool _filterOutbound;	// 9 = 0x9
    long long _statisticsReportFrequency;	// 16 = 0x10
    unsigned long long _peekInboundBytes;	// 24 = 0x18
    unsigned long long _peekOutboundBytes;	// 32 = 0x20
}

+ (id)pauseVerdict;	// IMP=0x000000000006c048
+ (id)filterDataVerdictWithFilterInbound:(_Bool)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(_Bool)arg3 peekOutboundBytes:(unsigned long long)arg4;	// IMP=0x000000000006bfaf
+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;	// IMP=0x000000000006bf2b
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;	// IMP=0x000000000006be88
+ (id)dropVerdict;	// IMP=0x000000000006be58
+ (id)allowVerdict;	// IMP=0x000000000006be00
+ (id)needRulesVerdict;	// IMP=0x000000000006bdb8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b959
@property unsigned long long peekOutboundBytes; // @synthesize peekOutboundBytes=_peekOutboundBytes;
@property unsigned long long peekInboundBytes; // @synthesize peekInboundBytes=_peekInboundBytes;
@property _Bool filterOutbound; // @synthesize filterOutbound=_filterOutbound;
@property _Bool filterInbound; // @synthesize filterInbound=_filterInbound;
@property long long statisticsReportFrequency; // @synthesize statisticsReportFrequency=_statisticsReportFrequency;
- (long long)filterAction;	// IMP=0x000000000006c076
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000006bc4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006bb78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ba65
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b961

@end

