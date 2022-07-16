//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VUIDocumentContextData, VUIDocumentPreFetchedData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject
{
    _Bool _shouldLoadPageImmediately;	// 8 = 0x8
    NSString *_documentRef;	// 16 = 0x10
    NSString *_documentType;	// 24 = 0x18
    NSString *_controllerRef;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    VUIDocumentContextData *_contextData;	// 48 = 0x30
    VUIDocumentPreFetchedData *_prefetchData;	// 56 = 0x38
    VUIDocumentUIConfiguration *_uiConfiguration;	// 64 = 0x40
    NSArray *_universalLinks;	// 72 = 0x48
    NSString *_marketingTabIdentifier;	// 80 = 0x50
    NSArray *_childDocumentDataSources;	// 88 = 0x58
}

+ (_Bool)isCanonicalDocumentRef:(id)arg1;	// IMP=0x0000000000042b13
+ (id)documentDataSourceWithDictionary:(id)arg1;	// IMP=0x0000000000042a01
- (void).cxx_destruct;	// IMP=0x0000000000043445
@property(retain, nonatomic) NSArray *childDocumentDataSources; // @synthesize childDocumentDataSources=_childDocumentDataSources;
@property(nonatomic) _Bool shouldLoadPageImmediately; // @synthesize shouldLoadPageImmediately=_shouldLoadPageImmediately;
@property(retain, nonatomic) NSString *marketingTabIdentifier; // @synthesize marketingTabIdentifier=_marketingTabIdentifier;
@property(retain, nonatomic) NSArray *universalLinks; // @synthesize universalLinks=_universalLinks;
@property(retain, nonatomic) VUIDocumentUIConfiguration *uiConfiguration; // @synthesize uiConfiguration=_uiConfiguration;
@property(retain, nonatomic) VUIDocumentPreFetchedData *prefetchData; // @synthesize prefetchData=_prefetchData;
@property(retain, nonatomic) VUIDocumentContextData *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *controllerRef; // @synthesize controllerRef=_controllerRef;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
@property(retain, nonatomic) NSString *documentRef; // @synthesize documentRef=_documentRef;
- (id)jsonData;	// IMP=0x0000000000042f7d
- (id)initWithDataSourceDict:(id)arg1;	// IMP=0x0000000000042c10
- (id)initWithDocumentRef:(id)arg1;	// IMP=0x0000000000042ba8

@end

