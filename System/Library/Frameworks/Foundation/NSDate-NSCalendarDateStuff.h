//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000024ed7
+ (id)dateWithNaturalLanguageString:(id)arg1;	// IMP=0x0000000000024ec0
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;	// IMP=0x0000000000024e49
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00000000000419e4
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;	// IMP=0x0000000000022bb5
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x0000000000022b50
- (Class)classForCoder;	// IMP=0x00000000000419d3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000418f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041834
- (_Bool)_web_isToday;	// IMP=0x000000000004860b
- (long long)_web_compareDay:(id)arg1;	// IMP=0x00000000000484e8
- (id)_web_RFC1123DateString;	// IMP=0x0000000000048356
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00000000001c06b2
@end

