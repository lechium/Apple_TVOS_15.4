//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CalAttachmentUtils : NSObject
{
}

+ (id)_knownTLDForHostname:(id)arg1;	// IMP=0x0000000000037dca
+ (id)_stripSubdomain:(id)arg1;	// IMP=0x0000000000037cd4
+ (_Bool)attachmentURL:(id)arg1 matchesServerURL:(id)arg2;	// IMP=0x0000000000037b2d
+ (id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2;	// IMP=0x0000000000037891
+ (id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003774b
+ (id)legacyCalendarDataContainer;	// IMP=0x0000000000037743
+ (id)legacyAttachmentContainerWithBaseURL:(id)arg1;	// IMP=0x0000000000037727
+ (id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2;	// IMP=0x00000000000376a1
+ (id)attachmentContainerWithBaseURL:(id)arg1;	// IMP=0x0000000000037685
+ (id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000037670

@end

