//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPSDuetPersonalizationProvider : NSObject
{
}

+ (id)contactFromIntentSiriTipStartCall:(id)arg1;	// IMP=0x00000000000568a7
+ (id)contactFromIntentForSiriTipSendMessage:(id)arg1;	// IMP=0x00000000000567c3
+ (id)nameFromRecipients:(id)arg1;	// IMP=0x000000000005664c
+ (id)_personalizedStringsForType:(long long)arg1 count:(unsigned long long)arg2 duetDataProvider:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000055ab2
+ (id)personalizedStringsForType:(long long)arg1 count:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000055a43
+ (id)personalizedStringsForType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000559d1

@end

