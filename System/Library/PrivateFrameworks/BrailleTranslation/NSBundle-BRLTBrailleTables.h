//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (BRLTBrailleTables)
+ (id)brl_brailleTableBundleWithIdentifier:(id)arg1;	// IMP=0x00000000000099a3
- (_Bool)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1;	// IMP=0x000000000000a873
- (id)brl_supportedLocalesForTableWithIdentifier:(id)arg1;	// IMP=0x000000000000a7c8
- (id)brl_languageAgnosticTables;	// IMP=0x000000000000a611
- (id)brl_supportedTablesForLocale:(id)arg1;	// IMP=0x0000000000009f90
- (id)brl_supportedLocales;	// IMP=0x0000000000009c59
- (id)brl_brailleTablesDictionary;	// IMP=0x0000000000009bae
@end

