//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFDateFormatVariableAggrandizement
{
}

+ (id)defaultAggrandizement;	// IMP=0x00000000001ffc30
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002000b4
- (id)processedContentClasses:(id)arg1;	// IMP=0x0000000000200082
@property(readonly, nonatomic) _Bool includesTimeForISO8601;
@property(readonly, nonatomic) NSString *customDateFormat;
@property(readonly, nonatomic) NSString *relativeDateStyle;
@property(readonly, nonatomic) NSString *timeStyle;
@property(readonly, nonatomic) NSString *dateStyle;
- (id)initWithCustomDateFormat:(id)arg1;	// IMP=0x00000000001ffe7d
- (id)initWithRFC2822DateStyle;	// IMP=0x00000000001ffe5c
- (id)initWithISO8601DateStyleAndTime:(_Bool)arg1;	// IMP=0x00000000001ffe29
- (id)initWithRelativeTimeStyle;	// IMP=0x00000000001ffe08
- (id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2;	// IMP=0x00000000001ffdd6
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3;	// IMP=0x00000000001ffdb1
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(_Bool)arg5;	// IMP=0x00000000001ffc69

@end
