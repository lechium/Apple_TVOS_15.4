//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem
{
    NSMutableSet *_supportedReports;	// 56 = 0x38
}

+ (id)copyParseRules;	// IMP=0x0000000000056328
- (void).cxx_destruct;	// IMP=0x0000000000056969
@property(retain, nonatomic) NSMutableSet *supportedReports; // @synthesize supportedReports=_supportedReports;
- (_Bool)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x000000000005659a
- (void)addSupportedReport:(id)arg1;	// IMP=0x00000000000564d8
- (id)description;	// IMP=0x0000000000056255
- (id)init;	// IMP=0x000000000005622f

@end
