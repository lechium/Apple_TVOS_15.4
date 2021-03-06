//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMMessageAcknowledgmentStringHelper : NSObject
{
}

+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2;	// IMP=0x0000000000016ea6
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(_Bool)arg3;	// IMP=0x0000000000016e94
+ (id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long *)arg3;	// IMP=0x0000000000016da8
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4;	// IMP=0x0000000000016c46
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 isGroupMessage:(_Bool)arg5;	// IMP=0x0000000000016c34
+ (id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(_Bool)arg3 messageSummaryInfo:(id)arg4 format:(long long *)arg5;	// IMP=0x0000000000016abc
+ (id)longContentTypeStringForContentType:(id)arg1;	// IMP=0x00000000000169bb
+ (id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2;	// IMP=0x00000000000169b3
+ (_Bool)shouldQuoteContentString:(id)arg1;	// IMP=0x0000000000016980
+ (id)messageAcknowledgmentString:(long long)arg1 lowercase:(_Bool)arg2;	// IMP=0x0000000000016774

@end

