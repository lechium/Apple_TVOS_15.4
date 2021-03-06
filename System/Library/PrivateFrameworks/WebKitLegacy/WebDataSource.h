//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL, NSURLRequest, NSURLResponse, WebArchive, WebFrame, WebResource;
@protocol WebDocumentRepresentation;

@interface WebDataSource : NSObject
{
    void *_private;	// 8 = 0x8
}

+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;	// IMP=0x00000000000aedd0
+ (void)initialize;	// IMP=0x00000000000aee10
+ (id)_repTypesAllowImageTypeOmission:(_Bool)arg1;	// IMP=0x00000000000af240
- (void)addSubresource:(id)arg1;	// IMP=0x00000000000b0980
- (id)subresourceForURL:(id)arg1;	// IMP=0x00000000000b07c0
@property(readonly, copy, nonatomic) NSArray *subresources;
@property(readonly, nonatomic) WebResource *mainResource;
@property(readonly, nonatomic) WebArchive *webArchive;
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, copy, nonatomic) NSString *pageTitle;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSString *textEncodingName;
@property(readonly, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) NSMutableURLRequest *request;
@property(readonly, nonatomic) NSURLRequest *initialRequest;
@property(readonly, nonatomic) WebFrame *webFrame;
@property(readonly, nonatomic) id <WebDocumentRepresentation> representation;
@property(readonly, copy, nonatomic) NSData *data;
- (void)dealloc;	// IMP=0x00000000000afed0
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000afc80
- (void)_setRepresentation:(id)arg1;	// IMP=0x00000000000aecd0
@property(readonly, nonatomic) NSDictionary *_quickLookContent;
- (id)dataSourceDelegate;	// IMP=0x00000000000af0a0
- (void)setDataSourceDelegate:(id)arg1;	// IMP=0x00000000000af090
- (void)_setAllowToBeMemoryMapped;	// IMP=0x00000000000af080
- (void)_setOverrideTextEncodingName:(id)arg1;	// IMP=0x00000000000aefe0
- (void)_setDeferMainResourceDataLoad:(_Bool)arg1;	// IMP=0x00000000000aefd0
- (id)_responseMIMEType;	// IMP=0x00000000000aefa0
- (void)_addSubframeArchives:(id)arg1;	// IMP=0x00000000000aee50
- (id)_mainDocumentError;	// IMP=0x00000000000aee30
- (id)_initWithDocumentLoader:(void *)arg1;	// IMP=0x00000000000afbd0
- (NakedPtr_2c503e7f)_documentLoader;	// IMP=0x00000000000afbb0
- (void)_makeRepresentation;	// IMP=0x00000000000af9f0
- (_Bool)_isDocumentHTML;	// IMP=0x00000000000af9b0
- (id)_webView;	// IMP=0x00000000000af980
- (id)_URL;	// IMP=0x00000000000af950
- (id)_imageElementWithImageResource:(id)arg1;	// IMP=0x00000000000af890
- (id)_documentFragmentWithImageResource:(id)arg1;	// IMP=0x00000000000af810
- (id)_documentFragmentWithArchive:(id)arg1;	// IMP=0x00000000000af640
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(_Bool)arg2;	// IMP=0x00000000000af5d0
- (void)_revertToProvisionalState;	// IMP=0x00000000000af220
- (void)_setMainDocumentError:(id)arg1;	// IMP=0x00000000000af1c0
- (void)_receivedData:(id)arg1;	// IMP=0x00000000000af100
- (void)_finishedLoading;	// IMP=0x00000000000af0c0

@end

