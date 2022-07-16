//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalConferencePersistenceFormat-Protocol.h>

@interface CalAppleConferenceFormat : NSObject <CalConferencePersistenceFormat>
{
}

+ (id)_detailsDelimiterRegex;	// IMP=0x0000000000026646
+ (id)_startDelimiterRegex;	// IMP=0x0000000000026530
+ (id)_conferenceTitleRegex;	// IMP=0x00000000000264bc
+ (id)_joinMethodTitleAndFeaturesRegex;	// IMP=0x0000000000026448
+ (_Bool)_line:(id)arg1 matchesRegex:(id)arg2 outFoundRange:(struct _NSRange *)arg3;	// IMP=0x00000000000263a2
+ (id)_buildDeserializationResultFromState:(id)arg1;	// IMP=0x0000000000026146
+ (void)_parseJoinMethodTitleAndFeatures:(id)arg1 state:(id)arg2;	// IMP=0x0000000000025c80
+ (void)_parseConferenceTitle:(id)arg1 state:(id)arg2;	// IMP=0x0000000000025a82
+ (void)_parseBlockTitle:(id)arg1 state:(id)arg2;	// IMP=0x00000000000258a5
+ (void)_parseURL:(id)arg1 state:(id)arg2;	// IMP=0x0000000000025786
+ (id)calConferenceSerializationHandle;	// IMP=0x0000000000024302
+ (id)calBundle;	// IMP=0x00000000000242e6
- (_Bool)supportsSerializingConferenceWithSource:(unsigned long long)arg1;	// IMP=0x000000000002577a
- (id)deserializeConferences:(id)arg1;	// IMP=0x0000000000024b81
- (id)serializeConference:(id)arg1 serializationBlockTitle:(id)arg2;	// IMP=0x000000000002435e

@end
